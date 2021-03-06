/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

@interface SKUIPostRatingOperation : ISOperation {

	NSDictionary* _responseDictionary;
	NSString* _itemID;
	long long _rating;
	SKUIReviewConfiguration* _reviewConfiguration;

}

@property (readonly) NSDictionary * responseDictionary; 
-(void)run;
-(NSDictionary *)responseDictionary;
-(id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3 ;
@end

