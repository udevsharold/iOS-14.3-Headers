/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCNNode;

@interface PKPeerPayment3DCharacter : NSObject {

	NSString* _character;
	SCNNode* _node;

}

@property (nonatomic,retain) NSString * character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,retain) SCNNode * node;                    //@synthesize node=_node - In the implementation block
+(id)characterWithCharacter:(id)arg1 node:(id)arg2 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(NSString *)character;
-(void)setCharacter:(NSString *)arg1 ;
@end
