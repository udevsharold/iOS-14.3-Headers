/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, NSString;

@interface HDKeyValueDomain : NSObject {

	HDProfile* _profile;
	Class _entityClass;
	long long _category;
	NSString* _domainName;

}

@property (nonatomic,readonly) long long category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
+(id)healthAppUserDefaultsDomainWithProfile:(id)arg1 ;
-(NSString *)domainName;
-(long long)category;
-(BOOL)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)dateForKey:(id)arg1 error:(id*)arg2 ;
-(id)numberForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyListValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)dataForKey:(id)arg1 error:(id*)arg2 ;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 profile:(id)arg3 ;
-(id)allValuesWithError:(id*)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setValuesWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)setValueForAllKeys:(id)arg1 error:(id*)arg2 ;
-(id)valuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id*)arg3 ;
-(id)modificationDatesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
@end

