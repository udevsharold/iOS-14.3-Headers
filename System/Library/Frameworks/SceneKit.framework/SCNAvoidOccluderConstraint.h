/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNAvoidOccluderConstraint : SCNConstraint {

	SCNNode* _target;
	unsigned long long _categoryBitMask;
	float _offset;
	id _delegate;

}

@property (assign,nonatomic) id<SCNAvoidOccluderConstraintDelegate> delegate; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) unsigned long long occluderCategoryBitMask; 
@property (assign,nonatomic) double bias; 
+(BOOL)supportsSecureCoding;
+(id)avoidOccluderConstraint;
+(id)avoidOccluderConstraintWithTarget:(id)arg1 ;
-(double)bias;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(SCNNode *)target;
-(id)initWithCoder:(id)arg1 ;
-(void)setBias:(double)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(void)setDelegate:(id<SCNAvoidOccluderConstraintDelegate>)arg1 ;
-(id<SCNAvoidOccluderConstraintDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)occluderCategoryBitMask;
-(void)setOccluderCategoryBitMask:(unsigned long long)arg1 ;
-(void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
@end

