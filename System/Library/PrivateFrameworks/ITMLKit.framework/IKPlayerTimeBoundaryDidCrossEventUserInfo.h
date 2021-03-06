/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

@interface IKPlayerTimeBoundaryDidCrossEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _boundary;

}

@property (nonatomic,readonly) double boundary;                        //@synthesize boundary=_boundary - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)properties;
-(id)initWithBoundary:(double)arg1 ;
-(double)boundary;
@end

