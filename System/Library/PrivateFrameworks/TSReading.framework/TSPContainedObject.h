/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSPObject;

@interface TSPContainedObject : NSObject {

	TSPObject* _owner;

}

@property (assign,nonatomic,__weak) TSPObject * owner;              //@synthesize owner=_owner - In the implementation block
-(void)setOwner:(TSPObject *)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(TSPObject *)owner;
-(id)documentRoot;
-(void)willModify;
-(void)willModifyForUpgrade;
@end
