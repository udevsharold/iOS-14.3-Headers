/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWScript.h>

@protocol SWSession;
@class SWDatastore, NSString, WKUserScript;

@interface SWDatastoreUpdateScript : NSObject <SWScript> {

	SWDatastore* _datastore;
	SWDatastore* _oldDatastore;
	id<SWSession> _originatingSession;

}

@property (nonatomic,readonly) SWDatastore * datastore;                       //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) SWDatastore * oldDatastore;                    //@synthesize oldDatastore=_oldDatastore - In the implementation block
@property (nonatomic,readonly) id<SWSession> originatingSession;              //@synthesize originatingSession=_originatingSession - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)source;
-(NSString *)identifier;
-(SWDatastore *)datastore;
-(NSString *)executableScript;
-(BOOL)queueable;
-(SWDatastore *)oldDatastore;
-(id<SWSession>)originatingSession;
-(id)initWithDatastore:(id)arg1 oldDatastore:(id)arg2 originatingSession:(id)arg3 ;
@end

