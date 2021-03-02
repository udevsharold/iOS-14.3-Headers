/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {

	GKCPolygonObstacle* _cPolygonObstacle;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
+(BOOL)supportsSecureCoding;
+(id)obstacleWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)vertexCount;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(2)vertexAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(GKCPolygonObstacle*)cPolygonObstacle;
-(Obstacle*)obstacle;
-(void)setCPolygonObstacle:(GKCPolygonObstacle*)arg1 ;
@end
