/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol INGenericIntent <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
@required
-(NSString *)verb;
-(void)setVerb:(id)arg1;
-(BOOL)isGenericIntent;
-(NSString *)domain;
-(void)setDomain:(id)arg1;
-(void)setParametersByName:(id)arg1;
-(NSDictionary *)parametersByName;

@end
