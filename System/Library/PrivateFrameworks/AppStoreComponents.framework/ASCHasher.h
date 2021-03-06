/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface ASCHasher : NSObject {

	BOOL _isFinalized;
	NSMutableData* _buffer;

}

@property (nonatomic,readonly) NSMutableData * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) BOOL isFinalized;                      //@synthesize isFinalized=_isFinalized - In the implementation block
+(unsigned long long)executionSeed;
-(id)init;
-(void)combineBool:(BOOL)arg1 ;
-(BOOL)isFinalized;
-(NSMutableData *)buffer;
-(void)combineInteger:(long long)arg1 ;
-(void)combineDouble:(double)arg1 ;
-(unsigned long long)finalizeHash;
-(void)combineObject:(id)arg1 ;
-(void)combineBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setIsFinalized:(BOOL)arg1 ;
-(void)combineUnsignedInteger:(unsigned long long)arg1 ;
@end

