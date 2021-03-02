/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreURLBag, NSString, NSError;

@interface VSStoreURLBagLoadOperation : VSAsyncOperation {

	VSStoreURLBag* _bag;
	NSString* _bagKey;
	id _value;
	NSError* _error;

}

@property (nonatomic,retain) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                  //@synthesize bagKey=_bagKey - In the implementation block
-(NSString *)bagKey;
-(id)value;
-(NSError *)error;
-(VSStoreURLBag *)bag;
-(void)setValue:(id)arg1 ;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)executionDidBegin;
-(void)setError:(NSError *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
@end
