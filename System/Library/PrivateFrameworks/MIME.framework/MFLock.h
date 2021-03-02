/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFLock : NSLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)isLockedByMe;
-(BOOL)tryLock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(id)init;
-(void)unlock;
-(void)dealloc;
-(id)description;
-(void)lock;
@end
