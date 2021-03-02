/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchToShareCore/SearchToShareCore-Structs.h>
@class NSArray;

@interface STSAnimatedImageInfo : NSObject {

	NSArray* _frames;
	double _duration;

}

@property (nonatomic,copy) NSArray * frames;               //@synthesize frames=_frames - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize size; 
-(NSArray *)frames;
-(void)setDuration:(double)arg1 ;
-(void)setFrames:(NSArray *)arg1 ;
-(CGSize)size;
-(double)duration;
@end
