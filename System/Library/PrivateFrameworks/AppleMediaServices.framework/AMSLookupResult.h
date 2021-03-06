/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLResult.h>

@class NSDictionary, NSDate, NSArray;

@interface AMSLookupResult : AMSURLResult {

	NSDictionary* _response;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
-(NSDate *)expirationDate;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
-(NSArray *)allItems;
-(id)initWithResult:(id)arg1 dictionary:(id)arg2 ;
-(id)itemForKey:(id)arg1 ;
@end

