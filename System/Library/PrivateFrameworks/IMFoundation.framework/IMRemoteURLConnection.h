/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSURLRequest, NSObject, IMURLSession;

@interface IMRemoteURLConnection : NSObject {

	BOOL _requireIDSHost;
	BOOL _forceCellularIfPossible;
	BOOL _shouldUsePipelining;
	BOOL _disableKeepAlive;
	BOOL _shouldReturnTimingData;
	BOOL _cancelled;
	BOOL _loading;
	int _concurrentConnections;
	int _keepAliveWifi;
	int _keepAliveCell;
	int _retries;
	NSString* _bundleIdentifierForDataUsage;
	NSURLRequest* _request;
	/*^block*/id _block;
	NSObject*<OS_xpc_object> _connection;
	IMURLSession* _URLSession;

}

@property (assign,nonatomic) BOOL cancelled;                                   //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL loading;                                     //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int retries;                                      //@synthesize retries=_retries - In the implementation block
@property (nonatomic,retain) IMURLSession * URLSession;                        //@synthesize URLSession=_URLSession - In the implementation block
@property (assign) BOOL requireIDSHost;                                        //@synthesize requireIDSHost=_requireIDSHost - In the implementation block
@property (assign) BOOL forceCellularIfPossible;                               //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;                    //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
@property (assign) BOOL shouldUsePipelining;                                   //@synthesize shouldUsePipelining=_shouldUsePipelining - In the implementation block
@property (assign) int concurrentConnections;                                  //@synthesize concurrentConnections=_concurrentConnections - In the implementation block
@property (assign) BOOL disableKeepAlive;                                      //@synthesize disableKeepAlive=_disableKeepAlive - In the implementation block
@property (assign) int keepAliveWifi;                                          //@synthesize keepAliveWifi=_keepAliveWifi - In the implementation block
@property (assign) int keepAliveCell;                                          //@synthesize keepAliveCell=_keepAliveCell - In the implementation block
@property (assign) BOOL shouldReturnTimingData;                                //@synthesize shouldReturnTimingData=_shouldReturnTimingData - In the implementation block
@property (retain) NSURLRequest * request;                                     //@synthesize request=_request - In the implementation block
@property (copy) id block;                                                     //@synthesize block=_block - In the implementation block
-(void)setShouldUsePipelining:(BOOL)arg1 ;
-(void)load;
-(void)setRetries:(int)arg1 ;
-(IMURLSession *)URLSession;
-(int)keepAliveCell;
-(BOOL)cancelled;
-(void)setURLSession:(IMURLSession *)arg1 ;
-(void)setKeepAliveWifi:(int)arg1 ;
-(int)concurrentConnections;
-(BOOL)forceCellularIfPossible;
-(void)_direct_load;
-(void)setDisableKeepAlive:(BOOL)arg1 ;
-(BOOL)disableKeepAlive;
-(void)setForceCellularIfPossible:(BOOL)arg1 ;
-(void)setShouldReturnTimingData:(BOOL)arg1 ;
-(void)setRequireIDSHost:(BOOL)arg1 ;
-(NSString *)bundleIdentifierForDataUsage;
-(void)setConcurrentConnections:(int)arg1 ;
-(void)setBundleIdentifierForDataUsage:(NSString *)arg1 ;
-(int)retries;
-(BOOL)loading;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)shouldUsePipelining;
-(NSURLRequest *)request;
-(void)dealloc;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_direct_cancel;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_xpc_disconnected;
-(id)block;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(BOOL)requireIDSHost;
-(void)cancel;
-(void)setKeepAliveCell:(int)arg1 ;
-(BOOL)_xpc_connect;
-(id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(BOOL)_xpc_disconnect;
-(BOOL)shouldReturnTimingData;
-(void)setLoading:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)_xpc_load;
-(NSObject*<OS_xpc_object>)connection;
-(int)keepAliveWifi;
@end

