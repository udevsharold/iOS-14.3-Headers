/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@interface AVTimecode : NSObject {

	unsigned _tc_flags;
	long long _frameNumber;
	CVSMPTETime _timecodeStruct;
	SCD_Struct_AV3 _frameDuration;

}

@property (assign,nonatomic) CVSMPTETime timecodeStruct;                //@synthesize timecodeStruct=_timecodeStruct - In the implementation block
@property (assign,nonatomic) long long frameNumber;                     //@synthesize frameNumber=_frameNumber - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV3 frameDuration;              //@synthesize frameDuration=_frameDuration - In the implementation block
@property (assign,nonatomic) unsigned tc_flags;                         //@synthesize tc_flags=_tc_flags - In the implementation block
-(unsigned)tc_flags;
-(void)setFrameDuration:(SCD_Struct_AV3)arg1 ;
-(long long)frameNumber;
-(CVSMPTETime)timecodeStruct;
-(void)setTc_flags:(unsigned)arg1 ;
-(id)initWithTimecodeString:(id)arg1 ;
-(BOOL)stringIsValidNumericValue:(id)arg1 ;
-(void)setTimecodeStruct:(CVSMPTETime)arg1 ;
-(void)setFrameNumber:(long long)arg1 ;
-(SCD_Struct_AV3)frameDuration;
@end

