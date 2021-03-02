/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode2D : GKGraphNode {

	GKCGraphNode2D* _cGraphNode2D;

}

@property (assign,nonatomic)  position; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithPoint:;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPoint:;
-()position;
-(void)setPosition:;
-(void)encodeWithCoder:(id)arg1 ;
-(GKCGraphNode2D*)cGraphNode2D;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
@end
