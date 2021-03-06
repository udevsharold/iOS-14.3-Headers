/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFSettingsPersistable.h>

@class NSArray, NSString, NSDictionary;

@interface WFSettingsIPV6 : NSObject <WFSettingsPersistable> {

	long long _method;
	NSArray* _addresses;
	NSArray* _prefixLengths;
	NSString* _router;
	NSDictionary* _items;

}

@property (assign,nonatomic) long long method;                      //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSArray * prefixLengths;               //@synthesize prefixLengths=_prefixLengths - In the implementation block
@property (nonatomic,retain) NSArray * addresses;                   //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,copy) NSString * router;                       //@synthesize router=_router - In the implementation block
@property (nonatomic,retain) NSDictionary * items;                  //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)automaticConfig;
+(id)linkLocalConfig;
-(void)setItems:(NSDictionary *)arg1 ;
-(id)protocol;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSString *)router;
-(NSArray *)addresses;
-(long long)method;
-(NSDictionary *)items;
-(void)setRouter:(NSString *)arg1 ;
-(NSString *)description;
-(void)setMethod:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)prefixLengths;
-(id)initWithMethod:(long long)arg1 addresses:(id)arg2 prefixLengths:(id)arg3 router:(id)arg4 ;
-(void)setPrefixLengths:(NSArray *)arg1 ;
@end

