/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FFFeatureState : NSObject {

	BOOL _hidden;
	NSDictionary* _attributes;
	NSString* _domain;
	NSString* _feature;
	long long _value;

}

@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * feature;                     //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hidden;                            //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long value;                        //@synthesize value=_value - In the implementation block
-(void)setAttributes:(NSDictionary *)arg1 ;
-(BOOL)hidden;
-(long long)value;
-(NSDictionary *)attributes;
-(void)setValue:(long long)arg1 ;
-(NSString *)domain;
-(id)description;
-(NSString *)feature;
-(void)setDomain:(NSString *)arg1 ;
-(void)setFeature:(NSString *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 hidden:(BOOL)arg4 attributes:(id)arg5 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 ;
@end

