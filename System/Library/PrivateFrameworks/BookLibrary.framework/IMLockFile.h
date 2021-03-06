/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMLockFile : NSObject {

	int _fd;
	BOOL _locked;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL locked;                  //@synthesize locked=_locked - In the implementation block
+(id)iTunesSyncLockFile;
+(id)iTunesSyncLockFilePath;
-(id)initWithPath:(id)arg1 ;
-(void)unlock;
-(NSString *)path;
-(void)dealloc;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)locked;
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)lockWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
@end

