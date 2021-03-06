/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPAGeometryOperator.h>

@protocol IPAGeometryOperator <NSObject>
@required
-(id)identifier;
-(id)transformForGeometry:(id)arg1;

@end


@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator> {

	NSString* _identifer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)transformForGeometry:(id)arg1 ;
@end

