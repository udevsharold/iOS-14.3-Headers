/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPFetcher, LPFetcherResponse;

@interface LPFetcherGroupTask : NSObject {

	BOOL _hasStarted;
	LPFetcher* _fetcher;
	LPFetcherResponse* _response;

}

@property (nonatomic,retain) LPFetcher * fetcher;                       //@synthesize fetcher=_fetcher - In the implementation block
@property (nonatomic,retain) LPFetcherResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                           //@synthesize hasStarted=_hasStarted - In the implementation block
-(void)setHasStarted:(BOOL)arg1 ;
-(LPFetcherResponse *)response;
-(void)setResponse:(LPFetcherResponse *)arg1 ;
-(LPFetcher *)fetcher;
-(BOOL)hasStarted;
-(void)setFetcher:(LPFetcher *)arg1 ;
@end

