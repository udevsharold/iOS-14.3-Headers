/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {

	NSMutableArray* _subpaths;

}
+(id)directorySubpathsOperationAtPath:(id)arg1 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(void)dealloc;
-(id)subpaths;
-(void)handlePathname:(id)arg1 ;
@end
