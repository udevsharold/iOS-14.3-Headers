/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableData, NSError, NSURLSessionTaskMetrics, AMSURLRequestProperties, AMSURLAction, NSURLResponse, NSMutableSet, AMSURLSession, NSURLSessionTask, NSObject, NSMutableDictionary;

@interface AMSURLTaskInfo : NSObject {

	NSMutableData* _data;
	NSError* _error;
	unsigned long long _previousAuthorizationCredentialSource;
	NSURLSessionTaskMetrics* _metrics;
	AMSURLRequestProperties* _properties;
	AMSURLAction* _receivedAction;
	NSURLResponse* _response;
	long long _retryCount;
	NSMutableSet* _retryIdentifiers;
	AMSURLSession* _session;
	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _taskQueue;
	NSMutableDictionary* _userInfo;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSMutableData * data;                                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long previousAuthorizationCredentialSource;              //@synthesize previousAuthorizationCredentialSource=_previousAuthorizationCredentialSource - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;                                     //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) AMSURLRequestProperties * properties;                                  //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) AMSURLAction * receivedAction;                                         //@synthesize receivedAction=_receivedAction - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                                              //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) long long retryCount;                                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSMutableSet * retryIdentifiers;                                       //@synthesize retryIdentifiers=_retryIdentifiers - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                                               //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> taskQueue;                              //@synthesize taskQueue=_taskQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                      //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)sharedTaskStore;
+(id)taskInfoForTask:(id)arg1 ;
+(id)createTaskInfoForTask:(id)arg1 ;
+(void)removeTaskInfoForTask:(id)arg1 ;
+(id)sharedTaskQueue;
-(void)setRetryCount:(long long)arg1 ;
-(void)setSession:(AMSURLSession *)arg1 ;
-(long long)retryCount;
-(AMSURLSession *)session;
-(NSError *)error;
-(id)initWithTask:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)taskQueue;
-(void)setPreviousAuthorizationCredentialSource:(unsigned long long)arg1 ;
-(NSMutableData *)data;
-(NSURLResponse *)response;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(id)completionBlock;
-(AMSURLAction *)receivedAction;
-(void)setReceivedAction:(AMSURLAction *)arg1 ;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(NSMutableSet *)retryIdentifiers;
-(void)setRetryIdentifiers:(NSMutableSet *)arg1 ;
-(AMSURLRequestProperties *)properties;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURLSessionTaskMetrics *)metrics;
-(NSURLSessionTask *)task;
-(void)setError:(NSError *)arg1 ;
-(void)migrateFromTaskInfo:(id)arg1 ;
-(unsigned long long)previousAuthorizationCredentialSource;
@end
