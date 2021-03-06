/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLComponents, NSMutableDictionary, NSURL, GEOURLWithHeaders;

@interface GEOURLComponentsWithHeaders : NSObject {

	NSURLComponents* _URLComponents;
	NSMutableDictionary* _headerFields;

}

@property (nonatomic,readonly) NSURLComponents * URLComponents;                 //@synthesize URLComponents=_URLComponents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) GEOURLWithHeaders * URLWithHeaders; 
-(id)initWithString:(id)arg1 ;
-(NSMutableDictionary *)headerFields;
-(id)init;
-(id)initWithURLComponents:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(GEOURLWithHeaders *)URLWithHeaders;
-(void)updateQueryItemsWithBlock:(/*^block*/id)arg1 ;
-(NSURLComponents *)URLComponents;
-(NSURL *)URL;
@end

