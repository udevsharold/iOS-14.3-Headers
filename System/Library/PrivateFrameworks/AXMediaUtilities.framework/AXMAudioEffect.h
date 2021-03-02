/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject {

	AXMAudioDataSource* _inputSource;

}

@property (assign,nonatomic,__weak) AXMAudioDataSource * inputSource;              //@synthesize inputSource=_inputSource - In the implementation block
-(void)processSamples:(unsigned long long)arg1 ;
-(AXMAudioDataSource *)inputSource;
-(void)setInputSource:(AXMAudioDataSource *)arg1 ;
@end
