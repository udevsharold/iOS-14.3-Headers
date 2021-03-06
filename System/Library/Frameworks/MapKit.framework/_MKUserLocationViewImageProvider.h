/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _MKUserLocationView, NSObject, CNContactStore, CNMonogrammer;

@interface _MKUserLocationViewImageProvider : NSObject {

	_MKUserLocationView* _view;
	NSObject*<OS_dispatch_queue> _queue;
	CNContactStore* _contactStore;
	CNMonogrammer* _monogrammer;

}
-(id)init;
-(void)_contactsChanged:(id)arg1 ;
-(id)_monogrammer;
-(void)_updateDefaultImage;
-(void)_updateImage;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)_updateContactImage;
@end

