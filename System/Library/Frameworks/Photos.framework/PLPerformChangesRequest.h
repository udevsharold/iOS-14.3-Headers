/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPerformChangesRequest <NSObject>
@required
-(long long)accessScopeOptionsRequiredForRequestedChanges;
-(void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;
-(id)errorWithLocalizedDescription:(id)arg1;
-(void)discardUnsupportedLimitedLibraryChangeRequests;
-(void)executeWithService:(id)arg1 reply:(/*^block*/id)arg2;

@end

