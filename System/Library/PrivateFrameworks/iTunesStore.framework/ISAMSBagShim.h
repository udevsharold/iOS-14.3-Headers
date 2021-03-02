/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, SSBag, ISURLBag;

@interface ISAMSBagShim : NSObject <AMSBagProtocol> {

	SSBag* _bag;
	ISURLBag* _URLBag;
	long long _type;

}

@property (nonatomic,retain) SSBag * bag;                                      //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) ISURLBag * URLBag;                                //@synthesize URLBag=_URLBag - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)arrayForKey:(id)arg1 ;
-(NSString *)profileVersion;
-(ISURLBag *)URLBag;
-(id)stringForKey:(id)arg1 ;
-(void)setURLBag:(ISURLBag *)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(void)setType:(long long)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(id)initWithURLBag:(id)arg1 ;
-(SSBag *)bag;
-(BOOL)isLoaded;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setBag:(SSBag *)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(long long)type;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
@end
