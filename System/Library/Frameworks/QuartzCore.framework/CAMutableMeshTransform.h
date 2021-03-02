/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
@property (assign) BOOL replicatesEdges; 
+(id)meshTransform;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(BOOL)replicatesEdges;
-(void)setDepthNormalization:(NSString *)arg1 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 ;
-(void)setReplicatesEdges:(BOOL)arg1 ;
-(void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)removeVertexAtIndex:(unsigned long long)arg1 ;
-(void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)setSubdivisionSteps:(int)arg1 ;
@end
