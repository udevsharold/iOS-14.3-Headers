/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BBAssociationSet : NSObject {

	NSString* _associationSetKey;
	unsigned long long _associatedObjectMemoryPointerFunction;

}
+(id)setWithStrongAssociation;
+(id)setWithWeakAssociation;
-(id)_initWithMemoryPointerFunction:(unsigned long long)arg1 ;
-(id)associatedObjectsForObject:(id)arg1 ;
-(void)associateObject:(id)arg1 withObject:(id)arg2 ;
-(void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2 ;
@end
