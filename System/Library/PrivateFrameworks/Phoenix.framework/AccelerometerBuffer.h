/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Phoenix/Phoenix-Structs.h>
@class NSMutableArray;

@interface AccelerometerBuffer : NSObject {

	NSMutableArray* _accelBuffer;
	unsigned long long _bufferSize;
	SCD_Struct_Ac2 _movingSum;
	unsigned long long _sampleRate;
	double _localMinBelowAverage;
	double _localMaxAboveAverage;
	double _localMin;
	double _localMax;

}

@property (assign,nonatomic) double localMinBelowAverage;              //@synthesize localMinBelowAverage=_localMinBelowAverage - In the implementation block
@property (assign,nonatomic) double localMaxAboveAverage;              //@synthesize localMaxAboveAverage=_localMaxAboveAverage - In the implementation block
@property (assign,nonatomic) double localMin;                          //@synthesize localMin=_localMin - In the implementation block
@property (assign,nonatomic) double localMax;                          //@synthesize localMax=_localMax - In the implementation block
-(SCD_Struct_AX0)data;
-(void)reset;
-(id)description;
-(id)logBuffer;
-(void)_fillAccelBufferBeforeFirstSampleTimestamp:(double)arg1 ;
-(double)localMaxAboveAverage;
-(void)setLocalMaxAboveAverage:(double)arg1 ;
-(double)localMinBelowAverage;
-(void)setLocalMinBelowAverage:(double)arg1 ;
-(double)localMax;
-(void)setLocalMax:(double)arg1 ;
-(double)localMin;
-(void)setLocalMin:(double)arg1 ;
-(void)resetMovingSum;
-(id)initWithCapacity:(unsigned long long)arg1 accelerometerSampleRateInHz:(unsigned long long)arg2 ;
-(id)bufferWithMovingSum:(SCD_Struct_Ac2*)arg1 ;
-(void)addData:(SCD_Struct_Ac2)arg1 timestamp:(double)arg2 ;
@end
