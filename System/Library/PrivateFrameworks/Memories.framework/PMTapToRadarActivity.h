/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class VEKProduction, MiroMovie, VEKResult;

@interface PMTapToRadarActivity : UIActivity {

	VEKProduction* _production;
	MiroMovie* _tapToRadarMovie;
	VEKResult* _result;

}

@property (assign,nonatomic,__weak) VEKProduction * production;               //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) MiroMovie * tapToRadarMovie;              //@synthesize tapToRadarMovie=_tapToRadarMovie - In the implementation block
@property (assign,nonatomic,__weak) VEKResult * result;                       //@synthesize result=_result - In the implementation block
-(void)setResult:(VEKResult *)arg1 ;
-(VEKResult *)result;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)performActivity;
-(void)setProduction:(VEKProduction *)arg1 ;
-(VEKProduction *)production;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)initWithProduction:(id)arg1 result:(id)arg2 ;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
-(id)_returnTextDebugAsString;
-(MiroMovie *)tapToRadarMovie;
@end

