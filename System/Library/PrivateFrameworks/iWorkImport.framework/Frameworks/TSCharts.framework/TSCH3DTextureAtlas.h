/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DTextureAtlas : NSObject {

	NSMutableDictionary* mCachedLabels;
	NSMutableArray* mTextures;
	float mSamples;

}

@property (nonatomic,readonly) float samples; 
+(id)atlas;
+(id)atlasWithSamples:(float)arg1 ;
-(id)textureAtIndex:(long long)arg1 ;
-(float)samples;
-(void)dealloc;
-(id)initWithSamples:(float)arg1 ;
-(tvec3<int>)p_addLabel:(id)arg1 ;
-(tvec2<int>)textureSizeAtIndex:(long long)arg1 ;
-(tvec3<int>)positionForLabel:(id)arg1 ;
@end

