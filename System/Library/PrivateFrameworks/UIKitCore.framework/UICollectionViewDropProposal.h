/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDropProposal.h>

@interface UICollectionViewDropProposal : UIDropProposal {

	long long _intent;

}

@property (assign,nonatomic) long long intent;              //@synthesize intent=_intent - In the implementation block
-(id)description;
-(long long)intent;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(long long)dropLocation;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
-(void)setIntent:(long long)arg1 ;
@end

