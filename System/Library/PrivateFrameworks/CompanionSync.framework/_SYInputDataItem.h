/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSMutableData;

@interface _SYInputDataItem : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _length;
	NSMutableData* _data;
	/*^block*/id _callback;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                             //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) unsigned long long length;                         //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthRemaining; 
@property (nonatomic,readonly) NSMutableData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id callback;                                         //@synthesize callback=_callback - In the implementation block
-(void)setCallback:(id)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)callback;
-(NSMutableData *)data;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)lock;
-(id)initWithLength:(unsigned long long)arg1 callback:(/*^block*/id)arg2 ;
-(unsigned long long)lengthRemaining;
@end
