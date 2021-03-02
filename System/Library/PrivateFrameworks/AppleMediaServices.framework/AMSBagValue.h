/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagDataSourceProtocol;
@class ACAccount, NSString, NSArray;

@interface AMSBagValue : NSObject {

	ACAccount* _account;
	id<AMSBagDataSourceProtocol> _dataSource;
	NSString* _key;
	NSArray* _transformBlocks;
	unsigned long long _valueType;

}

@property (nonatomic,copy) ACAccount * account;                                           //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * key;                                              //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * transformBlocks;                                   //@synthesize transformBlocks=_transformBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
+(id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
+(id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2 ;
+(BOOL)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2 ;
+(id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3 ;
+(id)globalBagValueStorage;
+(id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(unsigned long long)valueType;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setValueType:(unsigned long long)arg1 ;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLoaded;
-(id)valueWithError:(id*)arg1 ;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 ;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4 ;
-(id)valuePromise;
-(NSArray *)transformBlocks;
-(void)setTransformBlocks:(NSArray *)arg1 ;
-(id)_processedDefaultValue:(id)arg1 ;
-(void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)transformWithBlock:(/*^block*/id)arg1 ;
@end
