/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PMLSessionDescriptor;

@interface SGModelSource : NSObject {

	PMLSessionDescriptor* _sessionDescriptor;
	Class _modelClass;

}

@property (nonatomic,retain) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,retain) Class modelClass;                                      //@synthesize modelClass=_modelClass - In the implementation block
-(Class)modelClass;
-(void)setModelClass:(Class)arg1 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(void)setSessionDescriptor:(PMLSessionDescriptor *)arg1 ;
-(id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2 ;
@end

