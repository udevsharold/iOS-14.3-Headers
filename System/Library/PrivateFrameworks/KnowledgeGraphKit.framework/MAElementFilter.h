/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface MAElementFilter : NSObject {

	unsigned short _domain;
	NSString* _label;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSArray * kgLabels; 
@property (nonatomic,copy,readonly) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned short domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSString * visualString; 
+(id)any;
+(BOOL)scanElementFilterLabel:(out id*)arg1 domain:(out int*)arg2 properties:(out id*)arg3 withScanner:(id)arg4 ;
+(BOOL)scanProperties:(out id*)arg1 withScanner:(id)arg2 ;
+(BOOL)scanPropertyValue:(out id*)arg1 withScanner:(id)arg2 ;
+(BOOL)scanInstance:(out id*)arg1 withScanner:(id)arg2 ;
+(id)scanFilterWithScanner:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)domain;
-(NSDictionary *)properties;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)matchesElement:(id)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(NSString *)visualString;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(NSArray *)kgLabels;
-(void)appendVisualStringToString:(id)arg1 ;
@end
