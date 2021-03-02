/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BRFileObjectID, NSURL;

@interface BRQueryStitch : NSObject {

	NSArray* _contexts;
	BRFileObjectID* _objid;
	char _kind;
	NSURL* _fromURL;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * fromURL;                 //@synthesize fromURL=_fromURL - In the implementation block
@property (nonatomic,retain) NSArray * contexts;              //@synthesize contexts=_contexts - In the implementation block
-(NSArray *)contexts;
-(NSURL *)fromURL;
-(void)setContexts:(NSArray *)arg1 ;
-(void)dealloc;
-(void)done;
-(void)_renameDone;
-(void)_deletionDone;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_creationDone;
-(id)initWithURL:(id)arg1 objid:(id)arg2 kind:(char)arg3 ;
-(void)setFromURL:(NSURL *)arg1 ;
-(id)description;
-(void)setQueries:(id)arg1 ;
@end
