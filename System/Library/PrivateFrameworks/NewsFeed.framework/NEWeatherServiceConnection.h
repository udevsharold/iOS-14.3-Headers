/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFServiceConnection;

@interface NEWeatherServiceConnection : NSObject {

	WFServiceConnection* _connection;

}

@property (nonatomic,readonly) WFServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)enqueueRequest:(id)arg1 ;
-(WFServiceConnection *)connection;
@end
