/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface STCFUpdateScripts : NSObject {

	NSDictionary* _updatedScripts;

}
-(id)init;
-(void)_getUpdatedScripts;
-(void)_writeUpdatedReplayFileAt:(id)arg1 withObjects:(id)arg2 error:(id*)arg3 ;
-(void)updateCFScriptsForReplayFile:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
