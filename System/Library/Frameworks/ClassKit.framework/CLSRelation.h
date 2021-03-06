/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSRelation : NSObject {

	BOOL _faultable;
	Class _fromEntity;
	NSString* _fromKey;
	Class _toEntity;
	NSString* _toKey;

}

@property (nonatomic,readonly) Class fromEntity;                               //@synthesize fromEntity=_fromEntity - In the implementation block
@property (nonatomic,readonly) NSString * fromKey;                             //@synthesize fromKey=_fromKey - In the implementation block
@property (nonatomic,readonly) Class toEntity;                                 //@synthesize toEntity=_toEntity - In the implementation block
@property (nonatomic,readonly) NSString * toKey;                               //@synthesize toKey=_toKey - In the implementation block
@property (getter=isFaultable,nonatomic,readonly) BOOL faultable;              //@synthesize faultable=_faultable - In the implementation block
-(NSString *)toKey;
-(id)description;
-(NSString *)fromKey;
-(Class)toEntity;
-(id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(BOOL)arg5 ;
-(BOOL)isInverseOfRelation:(id)arg1 ;
-(BOOL)isEquivalentToRelation:(id)arg1 ;
-(BOOL)isFaultable;
-(Class)fromEntity;
@end

