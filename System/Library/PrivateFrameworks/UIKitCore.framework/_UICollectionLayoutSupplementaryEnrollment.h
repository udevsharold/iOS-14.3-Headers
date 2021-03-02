/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface _UICollectionLayoutSupplementaryEnrollment : NSObject {

	NSString* _kind;
	NSUUID* _enrollmentIdentifier;

}

@property (nonatomic,readonly) NSString * kind;                            //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSUUID * enrollmentIdentifier;              //@synthesize enrollmentIdentifier=_enrollmentIdentifier - In the implementation block
-(id)description;
-(NSUUID *)enrollmentIdentifier;
-(id)initWithKind:(id)arg1 ;
-(NSString *)kind;
@end
