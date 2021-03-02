/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TSNewsActivityData : NSObject {

	 activity;
	 identifier;
	 object;
	 traits;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long activity; 
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) id object; 
@property (readonly,nonatomic) NSArray * traits; 
+(long long)convertToArticleTraitWithTrait:(long long)arg1 ;
-(NSString *)description;
-(long long)activity;
-(id)init;
-(id)object;
-(NSString *)identifier;
-(NSArray *)traits;
-(id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3 traits:(id)arg4 ;
-(id)initWithActivity:(long long)arg1 identifier:(id)arg2 ;
-(id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3 ;
@end
