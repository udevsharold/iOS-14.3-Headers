/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SBSwitcherModifierEventResponseSnapshot : NSObject {

	NSArray* _responseNames;
	NSArray* _responseDescriptions;

}

@property (nonatomic,retain) NSArray * responseNames;                     //@synthesize responseNames=_responseNames - In the implementation block
@property (nonatomic,retain) NSArray * responseDescriptions;              //@synthesize responseDescriptions=_responseDescriptions - In the implementation block
-(NSArray *)responseNames;
-(NSArray *)responseDescriptions;
-(void)setResponseNames:(NSArray *)arg1 ;
-(void)setResponseDescriptions:(NSArray *)arg1 ;
@end

