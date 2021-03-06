/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WFResponse, WFTaskIdentifier;


@protocol WFLocationQuery <NSObject>
@property (readonly) WFResponse * response; 
@property (retain) WFTaskIdentifier * identifier; 
@required
-(WFResponse *)response;
-(void)setIdentifier:(id)arg1;
-(WFTaskIdentifier *)identifier;
-(void)start;

@end

