/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@protocol NSLocking, CNFileServices;
@class NSString;

@interface CNProcessSharedLock : NSObject <NSLocking> {

	NSString* _lockFilePath;
	NSString* _name;
	id<NSLocking> _localLock;
	long long _localLockCount;
	int _fileDescriptor;
	id<CNFileServices> _fileServices;

}

@property (copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * lockFilePath;              //@synthesize lockFilePath=_lockFilePath - In the implementation block
+(id)os_log;
+(id)sharedLockWithLockFilePath:(id)arg1 ;
+(id)semaphoreSharedLockWithLockFilePath:(id)arg1 ;
+(id)recursiveSharedLockWithLockFilePath:(id)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)init;
-(BOOL)ensureFileIsLocal:(/*^block*/id)arg1 ;
-(id)errorUserInfo;
-(BOOL)openLockFile:(/*^block*/id)arg1 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3 ;
-(BOOL)ensureFileDescriptorIsInvalid:(/*^block*/id)arg1 ;
-(BOOL)isValidFileDescriptor;
-(id)errorUserInfoWithDescription:(id)arg1 ;
-(void)lockRetryOnEDEADLK;
-(id)exceptionWithName:(id)arg1 reason:(id)arg2 ;
-(NSString *)lockFilePath;
-(void)unlock;
-(void)dealloc;
-(BOOL)isValid;
-(id)description;
-(NSString *)name;
-(void)lock;
-(void)invalidate;
@end

