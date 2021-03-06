/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DragUI.framework/DragUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DragUI/DragUI-Structs.h>
#import <DragUI/DRPasteAnnouncementEndpoint.h>

@class NSData, NSString;

@interface DRPasteAnnouncementApplicationEndpoint : DRPasteAnnouncementEndpoint {

	struct {
		unsigned isHomeScreen : 1;
	}  _flags;
	NSData* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSData * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeScreenEndpoint;
-(NSData *)persistentIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLocalizedName:(id)arg1 persistentIdentifier:(id)arg2 ;
@end

