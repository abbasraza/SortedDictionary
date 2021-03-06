/*
MIT License

Copyright (c) 2009 Oren Trutner

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/



#import <Foundation/Foundation.h>
#import "SortedDictionary.h"


/**
 The \c MutableSortedDictionary class declares the programmatic interface to objects that manage
 mutable sorted associations of keys and values. It emulates the interface of
 \c NSMutableDictionary while maintaining and internal representation that keeps keys sorted. With
 its two efficient primitive methods - \a setObject:forKey: and \a removeObjectForKey: - this class
 adds modification operations to the basic operations it inherits from SortedDictionary.
 
 When an entry is removed from a mutable dictionary, the key and value objects that make up the
 entry receive \c release messages. If there are no further references to the objects, they’re
 deallocated. Note that if your program keeps a reference to such an object, the reference will
 become invalid unless you remember to send the object a \c retain message before it’s removed from
 the dictionary.
 
 The computational complexity of adding a key-value entry, and of removing a key-value entry is
 O(log \a n), where \a n is the number of entries already in the dictionary.
 */
@interface MutableSortedDictionary : SortedDictionary {
	}

	- (void) setObject: (id) anObject forKey: (id) aKey;
	- (void) setValue: (id) value forKey: (NSString *) key;
	- (void) addEntriesFromDictionary: (NSDictionary *) otherDictionary copyItems: (BOOL) flag;
	- (void) addEntriesFromSortedDictionary: (SortedDictionary *) otherDictionary copyItems: (BOOL) flag;
	- (void) setDictionary: (NSDictionary *) otherDictionary;
	- (void) setSortedDictionary: (SortedDictionary *) otherDictionary;

	- (void) removeAllObjects;
	- (void) removeObjectForKey: (id) aKey;
	- (void) removeObjectsForKeys: (NSArray *) keyArray;

@end
