/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

	NSString* path;
	NSArray* contents;
	unsigned long long idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned long long depth;
	BOOL cross;
	char _padding[3];

}
+(id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(BOOL)arg4 depth:(unsigned long long)arg5 ;
-(id)fileAttributes;
-(id)nextObject;
-(unsigned long long)level;
-(void)dealloc;
-(void)skipDescendents;
-(void)skipDescendants;
-(id)currentSubdirectoryAttributes;
-(id)_under;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(id)directoryAttributes;
@end
