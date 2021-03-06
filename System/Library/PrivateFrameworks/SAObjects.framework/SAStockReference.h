/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject

@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * symbol; 
+(id)referenceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)reference;
-(id)groupIdentifier;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)companyName;
@end

