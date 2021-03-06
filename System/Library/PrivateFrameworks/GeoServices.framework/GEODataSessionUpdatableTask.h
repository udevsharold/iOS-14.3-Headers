/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol GEODataSessionUpdatableTask <NSObject>
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) id<NSObject> parsedResponse; 
@required
-(id<NSObject>)parsedResponse;
-(NSError *)error;
-(void)setParsedResponse:(id)arg1;
-(void)setError:(id)arg1;

@end

